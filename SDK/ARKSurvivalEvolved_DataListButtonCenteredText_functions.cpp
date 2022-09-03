// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DataListButtonCenteredText_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DataListButtonCenteredText.DataListButtonCenteredText_C.ExecuteUbergraph_DataListButtonCenteredText
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDataListButtonCenteredText_C::ExecuteUbergraph_DataListButtonCenteredText(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataListButtonCenteredText.DataListButtonCenteredText_C.ExecuteUbergraph_DataListButtonCenteredText");

	UDataListButtonCenteredText_C_ExecuteUbergraph_DataListButtonCenteredText_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
