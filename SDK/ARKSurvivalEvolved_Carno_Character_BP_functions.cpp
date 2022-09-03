// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Carno_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Carno_Character_BP.Carno_Character_BP_C.UserConstructionScript
// ()

void ACarno_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Carno_Character_BP.Carno_Character_BP_C.UserConstructionScript");

	ACarno_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Carno_Character_BP.Carno_Character_BP_C.ExecuteUbergraph_Carno_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ACarno_Character_BP_C::ExecuteUbergraph_Carno_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Carno_Character_BP.Carno_Character_BP_C.ExecuteUbergraph_Carno_Character_BP");

	ACarno_Character_BP_C_ExecuteUbergraph_Carno_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
