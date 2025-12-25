class ObjectPrint extends Object{ // remove this Object it will still works

    int num;
    ObjectPrint (int num){
        this.num =  num;
    }

    // 

    @Override  // every class in inherited from Object class
    public String toString(){
        return String.valueOf (this.num);
    }
    public static void main (String [] args){

        ObjectPrint obj = new ObjectPrint(2);
        System.out.println (obj); // Without overriding toStiring function ObjectPrint@372f7a8d

    }
}

