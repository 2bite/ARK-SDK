// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BionicQuetz_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BionicQuetz_Character_BP.BionicQuetz_Character_BP_C.UserConstructionScript
// ()

void ABionicQuetz_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BionicQuetz_Character_BP.BionicQuetz_Character_BP_C.UserConstructionScript");

	ABionicQuetz_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BionicQuetz_Character_BP.BionicQuetz_Character_BP_C.ExecuteUbergraph_BionicQuetz_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABionicQuetz_Character_BP_C::ExecuteUbergraph_BionicQuetz_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BionicQuetz_Character_BP.BionicQuetz_Character_BP_C.ExecuteUbergraph_BionicQuetz_Character_BP");

	ABionicQuetz_Character_BP_C_ExecuteUbergraph_BionicQuetz_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
