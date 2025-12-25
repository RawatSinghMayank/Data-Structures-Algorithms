public class Animal {

    private int weight;
    private int height;
    private String category;

    public Animal (int weight, int height, String category ){
        this.weight = weight;
        this.height = height;
        this.category = category;
    }
    public int  getWeight (){
        return this.weight;
    }
    public int getHeight(){
        return this.height;
    }

    public String getCategory(){
        return this.category;
    }
}
