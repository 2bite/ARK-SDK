// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Volcano_Trike_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Volcano_Trike_Character_BP.Volcano_Trike_Character_BP_C.UserConstructionScript
// ()

void AVolcano_Trike_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Volcano_Trike_Character_BP.Volcano_Trike_Character_BP_C.UserConstructionScript");

	AVolcano_Trike_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Volcano_Trike_Character_BP.Volcano_Trike_Character_BP_C.ExecuteUbergraph_Volcano_Trike_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AVolcano_Trike_Character_BP_C::ExecuteUbergraph_Volcano_Trike_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Volcano_Trike_Character_BP.Volcano_Trike_Character_BP_C.ExecuteUbergraph_Volcano_Trike_Character_BP");

	AVolcano_Trike_Character_BP_C_ExecuteUbergraph_Volcano_Trike_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
