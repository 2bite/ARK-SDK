// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StatWidget_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function StatWidget.StatWidget_C.ExecuteUbergraph_StatWidget
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UStatWidget_C::ExecuteUbergraph_StatWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatWidget.StatWidget_C.ExecuteUbergraph_StatWidget");

	UStatWidget_C_ExecuteUbergraph_StatWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
