class Solution {
public:
    string replaceWords(vector<string>& dictionary, string sentence) {
        vector<string> words;
        string temp ="";
        for(char c: sentence){
            if(c== ' '){
                words.push_back(temp);
                temp="";
            }
            else{
                temp+=c;
            }

        }
        words.push_back(temp);

        for(string s: dictionary){
            int n = s.size();
            for(string &word : words){
                int m = word.size();
                if(n<=m){
                    bool y = false;
                    for(int i =0;i<n;i++){
                        if(word[i]!=s[i]) y = true;
                    }
                    if(!y) word = s;
                }
            }
        }
        string ans = "";
        for(string word: words){
            ans+=word+" " ;
        }
        ans.pop_back();
       return ans; 
    }

};
