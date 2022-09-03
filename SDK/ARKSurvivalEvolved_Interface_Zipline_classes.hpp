#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Interface_Zipline_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Interface_Zipline.Interface_Zipline_C
// 0x0000 (0x0028 - 0x0028)
class UInterface_Zipline_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Interface_Zipline.Interface_Zipline_C");
		return ptr;
	}


	void GetFinishedAttach_InterfaceCall(bool* bOutAttached);
	void GetActiveTargetedZipline(class APrimalStructure** Zipline);
	void SetProcessMoveToOrder_InterfaceCall(bool NewValue);
	void Set_Current_Move_To_Order_Location_Interface_Call(const struct FVector& NewLocation);
	void Get_Current_Move_to_Order_Location_InterfaceCall(struct FVector* OutLocation);
	void Get_Process_Move_to_Order_InterfaceCall(bool* Return);
	void GetClosestLocationToPointFromArray_InterfaceCall(const struct FVector& InPoint, TArray<struct FVector>* InArray, struct FVector* OutClosestPoint, int* OutIndex);
	void Set_Zipline_Jump_Off_Impulse_AI_InterfaceCall(const struct FVector& NewZiplineJumpOffImpulseAI);
	void Get_Zipline_Buff_Interface_Call(class APrimalBuff** Buff);
	void Set_Finished_Attach_Interface_Call(bool bNewFinishedAttach);
	void SetKeepHanging_InterfaceCall(bool bNewKeepHanging);
	void GetKeepHanging_InterfaceCall(bool* bKeepHanging);
	void SetUsingZipline_InterfaceCall(bool bUsingZipline);
	void Get_Allow_Zipline_Jumping_InterfaceCall(bool* bAllowZiplineJumping);
	void Get_Using_Zipline_InterfaceCall(bool* bUsingZipline);
	void Get_Current_Targeted_Zipline_InterfaceCall(class APrimalStructure** Anchor);
	void Start_Zipline_Jumping_InterfaceCall();
	void Multi_Soft_Set_Transform_InterfaceCall(const struct UObject_FTransform& NewTransform);
	void Get_Sliding_InterfaceCall(bool* bSliding);
	void Set_Sliding_InterfaceCall(bool bNewSliding);
	void Set_Zipline_Jump_Off_Direction_AI_InterfaceCall(const struct FVector& NewZiplineJumpOffDirectionAI);
	void Get_Is_Zipline_Jumping_InterfaceCall(bool* bZiplineJumping);
	void Set_Initial_Velocity_Multicast_InterfaceCall(const struct FVector& Velocity);
	void Set_Zipline_New_Target_Location_InterfaceCall(const struct FVector& NewLocation);
	void Get_Zipline_New_Target_Location_InterfaceCall(struct FVector* NewTargetLocation);
	void Get_Attach_from_Below_InterfaceCall(bool* bAttachFromBelow);
	void Set_Is_Hanging_InterfaceCall(bool bNewIsHanging);
	void Get_Is_Hanging_InterfaceCall(bool* bIsHanging);
	void Set_Non_Dedi_Tick_Every_Frame_InterfaceCall(bool bNewTickEveryFrame);
	void Try_Attaching_to_Zipline_InterfaceCall(class APrimalStructure* overrideAnchor, const struct FVector& OverrideStartLocation, float OverrideFindLocationDistance, const struct FVector& overrideFindLocationDirection, bool bDontUseLineOfSightCheck, bool* bSuccess);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
