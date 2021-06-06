// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Wyvern_Character_BP_Fire_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Wyvern_Character_BP_Fire.Wyvern_Character_BP_Fire_C.UserConstructionScript
// ()

void AWyvern_Character_BP_Fire_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Wyvern_Character_BP_Fire.Wyvern_Character_BP_Fire_C.UserConstructionScript");

	AWyvern_Character_BP_Fire_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Wyvern_Character_BP_Fire.Wyvern_Character_BP_Fire_C.ExecuteUbergraph_Wyvern_Character_BP_Fire
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWyvern_Character_BP_Fire_C::ExecuteUbergraph_Wyvern_Character_BP_Fire(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Wyvern_Character_BP_Fire.Wyvern_Character_BP_Fire_C.ExecuteUbergraph_Wyvern_Character_BP_Fire");

	AWyvern_Character_BP_Fire_C_ExecuteUbergraph_Wyvern_Character_BP_Fire_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
