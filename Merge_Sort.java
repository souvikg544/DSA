import java.util.Arrays;
public class Merge_Sort {
    static int[] mergeSort(int[]arr){
        if (arr.length == 1){
            return arr;
        }
        int mid = arr.length/2;
        int[] left = mergeSort(Arrays.copyOfRange(arr,0,mid));
        int[] right = mergeSort(Arrays.copyOfRange(arr,mid,arr.length));
        return merger(left,right);
    }
    private static int[] merger(int[]first,int[]second){
        int i = 0;
        int j = 0;
        int k = 0;
        int[] mix = new int[first.length+ second.length];
        while (i< first.length && j<second.length){
            if (first[i]<second[j]){
                mix[k] = first[i];
                i++;
            }else{
                mix[k] = second[j];
                j++;
            }
            k++;
        }
        while (i < first.length){
            mix[k] = first[i];
            i++;
            k++;
        }
        while (j < second.length){
            mix[k] = second[j];
            j++;
            k++;
        }
        return mix;
    }
    public static void main(String[] args) {
        int[] arr = {10,9,3,4,1,7,8,2,5,6,11,0};
        arr = mergeSort(arr);
        System.out.println(Arrays.toString(arr));

    }
}
