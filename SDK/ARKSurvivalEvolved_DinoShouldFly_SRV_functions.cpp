// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoShouldFly_SRV_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoShouldFly_SRV.DinoShouldFly_SRV_C.ReceiveTick
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void UDinoShouldFly_SRV_C::ReceiveTick(class AActor** OwnerActor, float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoShouldFly_SRV.DinoShouldFly_SRV_C.ReceiveTick");

	UDinoShouldFly_SRV_C_ReceiveTick_Params params;
	params.OwnerActor = OwnerActor;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoShouldFly_SRV.DinoShouldFly_SRV_C.ExecuteUbergraph_DinoShouldFly_SRV
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoShouldFly_SRV_C::ExecuteUbergraph_DinoShouldFly_SRV(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoShouldFly_SRV.DinoShouldFly_SRV_C.ExecuteUbergraph_DinoShouldFly_SRV");

	UDinoShouldFly_SRV_C_ExecuteUbergraph_DinoShouldFly_SRV_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
