// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_AmmoBox_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_AmmoBox.EngramEntry_AmmoBox_C.ExecuteUbergraph_EngramEntry_AmmoBox
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_AmmoBox_C::ExecuteUbergraph_EngramEntry_AmmoBox(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_AmmoBox.EngramEntry_AmmoBox_C.ExecuteUbergraph_EngramEntry_AmmoBox");

	UEngramEntry_AmmoBox_C_ExecuteUbergraph_EngramEntry_AmmoBox_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
