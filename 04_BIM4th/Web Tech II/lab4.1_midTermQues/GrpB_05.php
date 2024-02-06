<!-- WAP to delete the folder  -->

<?php

    function deleteFolder($folderPath){

        $arr = scandir($folderPath);

        foreach($arr as $a){
            if($a !== "." && $a!== ".."){
                $filePath = $folderPath . "/" . $a;

                if(is_dir($filePath)){
                    deleteFolder($filePath); 
                }
                else{
                    unlink($filePath);
                }
            }
        }

        if( rmdir($folderPath) )  echo"Deleted folder Succesfully";
        else "Unable ro del folder";
    }

    deleteFolder("./Hello");
?>