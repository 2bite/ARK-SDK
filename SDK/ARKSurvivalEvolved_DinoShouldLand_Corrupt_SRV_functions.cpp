// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoShouldLand_Corrupt_SRV_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoShouldLand_Corrupt_SRV.DinoShouldLand_Corrupt_SRV_C.ReceiveTick
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void UDinoShouldLand_Corrupt_SRV_C::ReceiveTick(class AActor** OwnerActor, float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoShouldLand_Corrupt_SRV.DinoShouldLand_Corrupt_SRV_C.ReceiveTick");

	UDinoShouldLand_Corrupt_SRV_C_ReceiveTick_Params params;
	params.OwnerActor = OwnerActor;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoShouldLand_Corrupt_SRV.DinoShouldLand_Corrupt_SRV_C.ExecuteUbergraph_DinoShouldLand_Corrupt_SRV
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoShouldLand_Corrupt_SRV_C::ExecuteUbergraph_DinoShouldLand_Corrupt_SRV(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoShouldLand_Corrupt_SRV.DinoShouldLand_Corrupt_SRV_C.ExecuteUbergraph_DinoShouldLand_Corrupt_SRV");

	UDinoShouldLand_Corrupt_SRV_C_ExecuteUbergraph_DinoShouldLand_Corrupt_SRV_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
