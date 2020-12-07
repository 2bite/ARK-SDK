// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Iguanodon_UpdateStance_DK_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Iguanodon_UpdateStance_DK.Iguanodon_UpdateStance_DK_C.ReceiveTick
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void UIguanodon_UpdateStance_DK_C::ReceiveTick(class AActor** OwnerActor, float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Iguanodon_UpdateStance_DK.Iguanodon_UpdateStance_DK_C.ReceiveTick");

	UIguanodon_UpdateStance_DK_C_ReceiveTick_Params params;
	params.OwnerActor = OwnerActor;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Iguanodon_UpdateStance_DK.Iguanodon_UpdateStance_DK_C.ExecuteUbergraph_Iguanodon_UpdateStance_DK
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UIguanodon_UpdateStance_DK_C::ExecuteUbergraph_Iguanodon_UpdateStance_DK(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Iguanodon_UpdateStance_DK.Iguanodon_UpdateStance_DK_C.ExecuteUbergraph_Iguanodon_UpdateStance_DK");

	UIguanodon_UpdateStance_DK_C_ExecuteUbergraph_Iguanodon_UpdateStance_DK_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
