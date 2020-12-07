// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Electric_Cable_Vertical_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Electric_Cable_Vertical.Electric_Cable_Vertical_C.UserConstructionScript
// ()

void AElectric_Cable_Vertical_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Electric_Cable_Vertical.Electric_Cable_Vertical_C.UserConstructionScript");

	AElectric_Cable_Vertical_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Electric_Cable_Vertical.Electric_Cable_Vertical_C.ExecuteUbergraph_Electric_Cable_Vertical
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AElectric_Cable_Vertical_C::ExecuteUbergraph_Electric_Cable_Vertical(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Electric_Cable_Vertical.Electric_Cable_Vertical_C.ExecuteUbergraph_Electric_Cable_Vertical");

	AElectric_Cable_Vertical_C_ExecuteUbergraph_Electric_Cable_Vertical_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
