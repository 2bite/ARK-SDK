// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Service_DKFlockAdjustSpeed_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Service_DKFlockAdjustSpeed.Service_DKFlockAdjustSpeed_C.ReceiveTick
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void UService_DKFlockAdjustSpeed_C::ReceiveTick(class AActor** OwnerActor, float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Service_DKFlockAdjustSpeed.Service_DKFlockAdjustSpeed_C.ReceiveTick");

	UService_DKFlockAdjustSpeed_C_ReceiveTick_Params params;
	params.OwnerActor = OwnerActor;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Service_DKFlockAdjustSpeed.Service_DKFlockAdjustSpeed_C.ExecuteUbergraph_Service_DKFlockAdjustSpeed
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UService_DKFlockAdjustSpeed_C::ExecuteUbergraph_Service_DKFlockAdjustSpeed(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Service_DKFlockAdjustSpeed.Service_DKFlockAdjustSpeed_C.ExecuteUbergraph_Service_DKFlockAdjustSpeed");

	UService_DKFlockAdjustSpeed_C_ExecuteUbergraph_Service_DKFlockAdjustSpeed_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
