// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WoodTable_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WoodTable.WoodTable_C.UserConstructionScript
// ()

void AWoodTable_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WoodTable.WoodTable_C.UserConstructionScript");

	AWoodTable_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WoodTable.WoodTable_C.ExecuteUbergraph_WoodTable
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWoodTable_C::ExecuteUbergraph_WoodTable(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WoodTable.WoodTable_C.ExecuteUbergraph_WoodTable");

	AWoodTable_C_ExecuteUbergraph_WoodTable_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
