// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TribeWarButton_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TribeWarButton.TribeWarButton_C.ExecuteUbergraph_TribeWarButton
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UTribeWarButton_C::ExecuteUbergraph_TribeWarButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TribeWarButton.TribeWarButton_C.ExecuteUbergraph_TribeWarButton");

	UTribeWarButton_C_ExecuteUbergraph_TribeWarButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
