var library = [ 
    {
        title: 'The Road Ahead',
        author: 'Bill Gates',
        readingStatus: true
    },
    {
        title: 'Steve Jobs',
        author: 'Walter Isaacson',
        readingStatus: true
    },
    {
        title: 'Mockingjay: The Final Book of The Hunger Games',
        author: 'Suzanne Collins',
        readingStatus: false
    }
];
const scanner=require("readline-sync");
console.log("1.The Road Ahead\n2.Steve Jobs\n3.Mockingjay: The Final Book of The Hunger Games")
var option=parseInt(scanner.question("choose a book to read :"));
if(option>3){
    console.log("please check your number");
}
else if(library[option-1].readingStatus===true)   {
   console.log("you still need to read '"+library[option-1].title+"' by "+library[option-1].author+".");

}else if(library[option-1].readingStatus===false){
    console.log("Already read '"+library[option-1].title+"' by "+library[option-1].author+".");
}else{
    console.log("try again");
}