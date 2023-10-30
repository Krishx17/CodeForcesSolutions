/*▄███████▀▀▀▀▀▀███████▄
░▐████▀▒▒   My   ▒▒▒▀████
░███▀▒▒▒▒  Dumb ▒▒▒▒▀█████
░▐██▒▒▒▒  Brain ▒▒▒▒▒████▌
░▐█▌▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒████▌
░░█▒▄▀▀▀▀▀▄▒▒▄▀▀▀▀▀▄▒▐███▌
░░░▐░░░▄▄░░▌▐░░░▄▄░░▌▐███▌
░▄▀▌░░░▀▀░░▌▐░░░▀▀░░▌▒▀▒█▌
░▌▒▀▄░░░░▄▀▒▒▀▄░░░▄▀▒▒▄▀▒▌
░▀▄▐▒▀▀▀▀▒▒▒▒▒▒▀▀▀▒▒▒▒▒▒█
░░░▀▌▒▄██▄▄▄▄████▄▒▒▒▒█▀
░░░░▄█████████████  █▒▒
░░░▀███▀▀████▀█████▀▒▌
░░░░░▌▒▒▒▄▒▒▒▄▒▒▒▒▒▒▐
░░░░░▌▒▒▒▒▀▀▀▒▒▒▒▒▒▒▐*/
class Solution {
public:

    int rob(vector<int>& nums) {
        //vector to store the results
        vector<int> totalRob;
        //iterative solution
        for(int idx = 0; idx < nums.size(); idx++){
            int maxRob = nums[idx];
            //left iteration
            for(int lslide = idx-2; lslide >= 0; lslide--){
                maxRob += nums[lslide];
                totalRob.push_back(maxRob);
                maxRob = nums[idx];
            }

            //right iteration
            for(int rslide = idx+2; rslide <= nums.size(); rslide++){
                maxRob += nums[rslide];
                totalRob.push_back(maxRob);
                maxRob = nums[idx];
            }
        }
        return *max_element(totalRob.begin(), totalRob.end());
    }
};