// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TribeManagerListButtonWidget_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TribeManagerListButtonWidget.TribeManagerListButtonWidget_C.ExecuteUbergraph_TribeManagerListButtonWidget
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UTribeManagerListButtonWidget_C::ExecuteUbergraph_TribeManagerListButtonWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TribeManagerListButtonWidget.TribeManagerListButtonWidget_C.ExecuteUbergraph_TribeManagerListButtonWidget");

	UTribeManagerListButtonWidget_C_ExecuteUbergraph_TribeManagerListButtonWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
