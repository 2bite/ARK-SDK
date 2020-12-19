// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TribeWarUI_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TribeWarUI.TribeWarUI_C.ExecuteUbergraph_TribeWarUI
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UTribeWarUI_C::ExecuteUbergraph_TribeWarUI(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TribeWarUI.TribeWarUI_C.ExecuteUbergraph_TribeWarUI");

	UTribeWarUI_C_ExecuteUbergraph_TribeWarUI_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
