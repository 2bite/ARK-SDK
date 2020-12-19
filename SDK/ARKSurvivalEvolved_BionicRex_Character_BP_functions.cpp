// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BionicRex_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BionicRex_Character_BP.BionicRex_Character_BP_C.ReceiveBeginPlay
// ()

void ABionicRex_Character_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BionicRex_Character_BP.BionicRex_Character_BP_C.ReceiveBeginPlay");

	ABionicRex_Character_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BionicRex_Character_BP.BionicRex_Character_BP_C.UserConstructionScript
// ()

void ABionicRex_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BionicRex_Character_BP.BionicRex_Character_BP_C.UserConstructionScript");

	ABionicRex_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BionicRex_Character_BP.BionicRex_Character_BP_C.ExecuteUbergraph_BionicRex_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABionicRex_Character_BP_C::ExecuteUbergraph_BionicRex_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BionicRex_Character_BP.BionicRex_Character_BP_C.ExecuteUbergraph_BionicRex_Character_BP");

	ABionicRex_Character_BP_C_ExecuteUbergraph_BionicRex_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
