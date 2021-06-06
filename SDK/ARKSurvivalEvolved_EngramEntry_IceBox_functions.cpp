// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_IceBox_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_IceBox.EngramEntry_IceBox_C.ExecuteUbergraph_EngramEntry_IceBox
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_IceBox_C::ExecuteUbergraph_EngramEntry_IceBox(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_IceBox.EngramEntry_IceBox_C.ExecuteUbergraph_EngramEntry_IceBox");

	UEngramEntry_IceBox_C_ExecuteUbergraph_EngramEntry_IceBox_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
