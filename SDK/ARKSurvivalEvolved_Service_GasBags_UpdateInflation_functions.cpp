// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Service_GasBags_UpdateInflation_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Service_GasBags_UpdateInflation.Service_GasBags_UpdateInflation_C.ReceiveTick
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void UService_GasBags_UpdateInflation_C::ReceiveTick(class AActor** OwnerActor, float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Service_GasBags_UpdateInflation.Service_GasBags_UpdateInflation_C.ReceiveTick");

	UService_GasBags_UpdateInflation_C_ReceiveTick_Params params;
	params.OwnerActor = OwnerActor;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Service_GasBags_UpdateInflation.Service_GasBags_UpdateInflation_C.ExecuteUbergraph_Service_GasBags_UpdateInflation
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UService_GasBags_UpdateInflation_C::ExecuteUbergraph_Service_GasBags_UpdateInflation(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Service_GasBags_UpdateInflation.Service_GasBags_UpdateInflation_C.ExecuteUbergraph_Service_GasBags_UpdateInflation");

	UService_GasBags_UpdateInflation_C_ExecuteUbergraph_Service_GasBags_UpdateInflation_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
