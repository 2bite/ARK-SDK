// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Dodo_Character_BP_Bunny_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Dodo_Character_BP_Bunny.Dodo_Character_BP_Bunny_C.UserConstructionScript
// ()

void ADodo_Character_BP_Bunny_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dodo_Character_BP_Bunny.Dodo_Character_BP_Bunny_C.UserConstructionScript");

	ADodo_Character_BP_Bunny_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dodo_Character_BP_Bunny.Dodo_Character_BP_Bunny_C.ExecuteUbergraph_Dodo_Character_BP_Bunny
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ADodo_Character_BP_Bunny_C::ExecuteUbergraph_Dodo_Character_BP_Bunny(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dodo_Character_BP_Bunny.Dodo_Character_BP_Bunny_C.ExecuteUbergraph_Dodo_Character_BP_Bunny");

	ADodo_Character_BP_Bunny_C_ExecuteUbergraph_Dodo_Character_BP_Bunny_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
