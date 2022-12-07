const scanner=require ("prompt-sync")();
var word=scanner("enter a word : ");
var n=word.length;console.log("word count : "+n);

var flag=1;
for(let i=0;i<n;i++){
    if(word[i]!=word[n-1-i]){
        flag=0;
        break;
    }
    
}
if(flag==1){
    console.log("word is palindrome");
}else{
    console.log("word is not palindrome");
}