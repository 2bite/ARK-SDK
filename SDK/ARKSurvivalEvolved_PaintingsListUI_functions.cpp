// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PaintingsListUI_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PaintingsListUI.PaintingsListUI_C.ExecuteUbergraph_PaintingsListUI
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPaintingsListUI_C::ExecuteUbergraph_PaintingsListUI(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PaintingsListUI.PaintingsListUI_C.ExecuteUbergraph_PaintingsListUI");

	UPaintingsListUI_C_ExecuteUbergraph_PaintingsListUI_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
