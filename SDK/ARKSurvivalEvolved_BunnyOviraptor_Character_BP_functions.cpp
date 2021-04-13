// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BunnyOviraptor_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BunnyOviraptor_Character_BP.BunnyOviraptor_Character_BP_C.UserConstructionScript
// ()

void ABunnyOviraptor_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BunnyOviraptor_Character_BP.BunnyOviraptor_Character_BP_C.UserConstructionScript");

	ABunnyOviraptor_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BunnyOviraptor_Character_BP.BunnyOviraptor_Character_BP_C.ExecuteUbergraph_BunnyOviraptor_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABunnyOviraptor_Character_BP_C::ExecuteUbergraph_BunnyOviraptor_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BunnyOviraptor_Character_BP.BunnyOviraptor_Character_BP_C.ExecuteUbergraph_BunnyOviraptor_Character_BP");

	ABunnyOviraptor_Character_BP_C_ExecuteUbergraph_BunnyOviraptor_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
