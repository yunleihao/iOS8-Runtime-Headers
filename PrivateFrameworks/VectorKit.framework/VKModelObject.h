/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class VKWorld, NSArray, VKModelObject, VKStyleManager, NSMutableArray, NSObject<OS_dispatch_semaphore>;

@interface VKModelObject : NSObject  {
    VKWorld *_world;
    VKModelObject *_supermodel;
    NSMutableArray *_submodels;
    bool_active;
    unsigned int _needsLayout;
    unsigned int _needsDisplay;
    NSObject<OS_dispatch_semaphore> *_drawReady;
    struct map<md::CommandBufferId, std::__1::unique_ptr<ggl::CommandBuffer, std::__1::default_delete<ggl::CommandBuffer> >, std::__1::less<md::CommandBufferId>, std::__1::allocator<std::__1::pair<const md::CommandBufferId, std::__1::unique_ptr<ggl::CommandBuffer, std::__1::default_delete<ggl::CommandBuffer> > > > > { 
        struct __tree<std::__1::__value_type<md::CommandBufferId, std::__1::unique_ptr<ggl::CommandBuffer, std::__1::default_delete<ggl::CommandBuffer> > >, std::__1::__map_value_compare<md::CommandBufferId, std::__1::__value_type<md::CommandBufferId, std::__1::unique_ptr<ggl::CommandBuffer, std::__1::default_delete<ggl::CommandBuffer> > >, std::__1::less<md::CommandBufferId>, true>, std::__1::allocator<std::__1::__value_type<md::CommandBufferId, std::__1::unique_ptr<ggl::CommandBuffer, std::__1::default_delete<ggl::CommandBuffer> > > > > { 
            struct __tree_node<std::__1::__value_type<md::CommandBufferId, std::__1::unique_ptr<ggl::CommandBuffer, std::__1::default_delete<ggl::CommandBuffer> > >, void *> {} *__begin_node_; 
            struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<md::CommandBufferId, std::__1::unique_ptr<ggl::CommandBuffer, std::__1::default_delete<ggl::CommandBuffer> > >, void *> > > { 
                struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                    struct __tree_node_base<void *> {} *__left_; 
                } __first_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__1::__map_value_compare<md::CommandBufferId, std::__1::__value_type<md::CommandBufferId, std::__1::unique_ptr<ggl::CommandBuffer, std::__1::default_delete<ggl::CommandBuffer> > >, std::__1::less<md::CommandBufferId>, true> > { 
                unsigned long long __first_; 
            } __pair3_; 
        } __tree_; 
    } _commandBuffers;
    struct CommandBufferIdSet { 
        struct vector<md::CommandBufferId, std::__1::allocator<md::CommandBufferId> > { 
            unsigned char *__begin_; 
            unsigned char *__end_; 
            struct __compressed_pair<md::CommandBufferId *, std::__1::allocator<md::CommandBufferId> > { 
                unsigned char *__first_; 
            } __end_cap_; 
        } _ids; 
    } _supportedPassIds;
}

@property VKWorld * world;
@property(readonly) NSArray * submodels;
@property(readonly) VKModelObject * supermodel;
@property(readonly) VKStyleManager * styleManager;
@property(getter=isActive) bool active;


- (id)submodels;
- (void)setSupportedPasses:(const struct CommandBufferIdSet { struct vector<md::CommandBufferId, std::__1::allocator<md::CommandBufferId> > { unsigned char *x_1_1_1; unsigned char *x_1_1_2; struct __compressed_pair<md::CommandBufferId *, std::__1::allocator<md::CommandBufferId> > { unsigned char *x_3_2_1; } x_1_1_3; } x1; }*)arg1;
- (void)removeFromSupermodel;
- (void)gglLayoutSceneIfNeeded:(id)arg1 withContext:(id)arg2 renderQueue:(struct RenderQueue { int (**x1)(); struct shared_ptr<ggl::RenderQueue> { struct RenderQueue {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; }*)arg3 dispatchQueue:(id)arg4;
- (void)unLockCommandBuffers:(struct RenderQueue { int (**x1)(); struct shared_ptr<ggl::RenderQueue> { struct RenderQueue {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; }*)arg1;
- (void)gglLayoutScene:(id)arg1 withContext:(id)arg2 renderQueue:(struct RenderQueue { int (**x1)(); struct shared_ptr<ggl::RenderQueue> { struct RenderQueue {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; }*)arg3;
- (bool)shouldLayoutWithoutStyleManager;
- (void)lockCommandBuffers:(struct RenderQueue { int (**x1)(); struct shared_ptr<ggl::RenderQueue> { struct RenderQueue {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; }*)arg1;
- (void)didRemoveFromSuperModel;
- (void)removeSubmodel:(id)arg1;
- (const struct CommandBufferIdSet { struct vector<md::CommandBufferId, std::__1::allocator<md::CommandBufferId> > { unsigned char *x_1_1_1; unsigned char *x_1_1_2; struct __compressed_pair<md::CommandBufferId *, std::__1::allocator<md::CommandBufferId> > { unsigned char *x_3_2_1; } x_1_1_3; } x1; }*)supportedRenderPasses;
- (void)_removeSubmodel:(id)arg1;
- (void)clearCommandBuffers;
- (void)setSupermodel:(id)arg1;
- (id)supermodel;
- (void)didMoveToSupermodel;
- (void)willMoveToSupermodel:(id)arg1;
- (void)setWorld:(id)arg1;
- (void)layoutScene:(id)arg1 withContext:(id)arg2;
- (void)addSubmodel:(id)arg1;
- (void)runAnimation:(id)arg1;
- (id)styleManager;
- (id)world;
- (bool)isActive;
- (void)setNeedsDisplay;
- (void)setNeedsLayout;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)setActive:(bool)arg1;
- (void)reset;
- (void)didReceiveMemoryWarning;

@end
