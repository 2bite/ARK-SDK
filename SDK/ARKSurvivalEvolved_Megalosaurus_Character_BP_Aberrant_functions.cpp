// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Megalosaurus_Character_BP_Aberrant_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Megalosaurus_Character_BP_Aberrant.Megalosaurus_Character_BP_Aberrant_C.AllowNocturnalLogic
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMegalosaurus_Character_BP_Aberrant_C::AllowNocturnalLogic(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Megalosaurus_Character_BP_Aberrant.Megalosaurus_Character_BP_Aberrant_C.AllowNocturnalLogic");

	AMegalosaurus_Character_BP_Aberrant_C_AllowNocturnalLogic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Megalosaurus_Character_BP_Aberrant.Megalosaurus_Character_BP_Aberrant_C.UserConstructionScript
// ()

void AMegalosaurus_Character_BP_Aberrant_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Megalosaurus_Character_BP_Aberrant.Megalosaurus_Character_BP_Aberrant_C.UserConstructionScript");

	AMegalosaurus_Character_BP_Aberrant_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Megalosaurus_Character_BP_Aberrant.Megalosaurus_Character_BP_Aberrant_C.ExecuteUbergraph_Megalosaurus_Character_BP_Aberrant
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMegalosaurus_Character_BP_Aberrant_C::ExecuteUbergraph_Megalosaurus_Character_BP_Aberrant(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Megalosaurus_Character_BP_Aberrant.Megalosaurus_Character_BP_Aberrant_C.ExecuteUbergraph_Megalosaurus_Character_BP_Aberrant");

	AMegalosaurus_Character_BP_Aberrant_C_ExecuteUbergraph_Megalosaurus_Character_BP_Aberrant_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
