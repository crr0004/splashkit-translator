/**
 * @header new_lang
 * @attribute group test
 */

namespace splashkit_lib
{
  /**
   * Description
   */
  typedef struct a_struct *struct_ptr;

  /**
   * [print_vector description]
   * @param v [description]
   * @attribute class struct_ptr
   * @attribute method update
   * @attribute self v
   */
  void update_struct(struct_ptr v);

  /**
   * [print_vector description]
   * @param v [description]
   * @param value [description]
   * @attribute class struct_ptr
   * @attribute method update
   * @attribute suffix with_value
   * @attribute self v
   */
  void update_struct(struct_ptr v, int value);

  /**
   * [print_vector description]
   * @param value [description]
   * @param v [description]
   * @attribute class struct_ptr
   * @attribute method update_other
   * @attribute suffix swap_order
   * @attribute self v
   */
  void update_struct(int value, struct_ptr v);

  /**
   * [print_struct description]
   * @param v [description]
   * @attribute class struct_ptr
   * @attribute method print
   * @attribute self v
   */
  void print_struct(struct_ptr v);

  /**
   * [get_struct description]
   * @return [description]
   * @attribute class struct_ptr
   * @attribute constructor true
   */
  struct_ptr get_struct();

  /**
   * [struct_ptr_get_value description]
   * @param  v [description]
   * @return   [description]
   * @attribute class  struct_ptr
   * @attribute getter value
   * @attribute self v
   */
  int struct_ptr_get_value(struct_ptr v);

  /**
   * [struct_ptr_get_value description]
   * @param  v [description]
   * @param  data [description]
   * @attribute class  struct_ptr
   * @attribute setter value
   * @attribute self v
   */
  void struct_ptr_set_value(struct_ptr v, int data);

  /**
   * [delete_struct_ptr description]
   * @param v [description]
   * @attribute class struct_ptr
   * @attribute destructor true
   */
  void delete_struct_ptr(struct_ptr v);

  /**
  * The free notifier can be registered with the system. It is called every
  * time a resource is freed.
  *
  * @param pointer   The pointer to the resource that is being freed.
  */
  typedef void (free_notifier)(void *pointer);

  /**
   * Register a function to be called when any resource is freed.
   *
   * @param fn The function to be called when a resource is freed.
   */
  void register_free_notifier(free_notifier *fn);

  /**
   * Remove the function from the list of functions receiving notification
   * of resource freeing.
   *
   * @param handler The function to remove
   */
  void deregister_free_notifier(free_notifier *handler);

  /**
   * @attribute static test_static
   * @attribute getter value
   * @return value
   */
  int get_value();

  /**
   * @attribute static test_static
   * @attribute method print
   */
  void print_value();

}
