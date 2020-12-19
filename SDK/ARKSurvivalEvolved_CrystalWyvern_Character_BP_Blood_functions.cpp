// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_CrystalWyvern_Character_BP_Blood_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CrystalWyvern_Character_BP_Blood.CrystalWyvern_Character_BP_Blood_C.UserConstructionScript
// ()

void ACrystalWyvern_Character_BP_Blood_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function CrystalWyvern_Character_BP_Blood.CrystalWyvern_Character_BP_Blood_C.UserConstructionScript");

	ACrystalWyvern_Character_BP_Blood_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CrystalWyvern_Character_BP_Blood.CrystalWyvern_Character_BP_Blood_C.ExecuteUbergraph_CrystalWyvern_Character_BP_Blood
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ACrystalWyvern_Character_BP_Blood_C::ExecuteUbergraph_CrystalWyvern_Character_BP_Blood(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CrystalWyvern_Character_BP_Blood.CrystalWyvern_Character_BP_Blood_C.ExecuteUbergraph_CrystalWyvern_Character_BP_Blood");

	ACrystalWyvern_Character_BP_Blood_C_ExecuteUbergraph_CrystalWyvern_Character_BP_Blood_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
