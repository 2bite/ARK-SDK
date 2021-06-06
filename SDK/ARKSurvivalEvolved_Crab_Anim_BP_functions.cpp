// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Crab_Anim_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Crab_Anim_BP.Crab_Anim_BP_C.UpdateGrabIdle
// ()
// Parameters:
// class APrimalCharacter**       OwningChar                     (Parm, ZeroConstructor, IsPlainOldData)

void UCrab_Anim_BP_C::UpdateGrabIdle(class APrimalCharacter** OwningChar)
{
	static auto fn = UObject::FindObject<UFunction>("Function Crab_Anim_BP.Crab_Anim_BP_C.UpdateGrabIdle");

	UCrab_Anim_BP_C_UpdateGrabIdle_Params params;
	params.OwningChar = OwningChar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Crab_Anim_BP.Crab_Anim_BP_C.ExecuteUbergraph_Crab_Anim_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UCrab_Anim_BP_C::ExecuteUbergraph_Crab_Anim_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Crab_Anim_BP.Crab_Anim_BP_C.ExecuteUbergraph_Crab_Anim_BP");

	UCrab_Anim_BP_C_ExecuteUbergraph_Crab_Anim_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
