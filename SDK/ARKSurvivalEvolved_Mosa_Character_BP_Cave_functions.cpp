// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Mosa_Character_BP_Cave_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Mosa_Character_BP_Cave.Mosa_Character_BP_Cave_C.UserConstructionScript
// ()

void AMosa_Character_BP_Cave_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mosa_Character_BP_Cave.Mosa_Character_BP_Cave_C.UserConstructionScript");

	AMosa_Character_BP_Cave_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mosa_Character_BP_Cave.Mosa_Character_BP_Cave_C.ExecuteUbergraph_Mosa_Character_BP_Cave
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMosa_Character_BP_Cave_C::ExecuteUbergraph_Mosa_Character_BP_Cave(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mosa_Character_BP_Cave.Mosa_Character_BP_Cave_C.ExecuteUbergraph_Mosa_Character_BP_Cave");

	AMosa_Character_BP_Cave_C_ExecuteUbergraph_Mosa_Character_BP_Cave_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
