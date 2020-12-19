// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DataListButton_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DataListButton.DataListButton_C.ExecuteUbergraph_DataListButton
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDataListButton_C::ExecuteUbergraph_DataListButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataListButton.DataListButton_C.ExecuteUbergraph_DataListButton");

	UDataListButton_C_ExecuteUbergraph_DataListButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
