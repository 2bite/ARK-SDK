// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Ocean_Basilosaurus_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ocean_Basilosaurus_Character_BP.Ocean_Basilosaurus_Character_BP_C.UserConstructionScript
// ()

void AOcean_Basilosaurus_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ocean_Basilosaurus_Character_BP.Ocean_Basilosaurus_Character_BP_C.UserConstructionScript");

	AOcean_Basilosaurus_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ocean_Basilosaurus_Character_BP.Ocean_Basilosaurus_Character_BP_C.ExecuteUbergraph_Ocean_Basilosaurus_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AOcean_Basilosaurus_Character_BP_C::ExecuteUbergraph_Ocean_Basilosaurus_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ocean_Basilosaurus_Character_BP.Ocean_Basilosaurus_Character_BP_C.ExecuteUbergraph_Ocean_Basilosaurus_Character_BP");

	AOcean_Basilosaurus_Character_BP_C_ExecuteUbergraph_Ocean_Basilosaurus_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
