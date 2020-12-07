// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_StorageBox_Balloon_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_StorageBox_Balloon.EngramEntry_StorageBox_Balloon_C.ExecuteUbergraph_EngramEntry_StorageBox_Balloon
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_StorageBox_Balloon_C::ExecuteUbergraph_EngramEntry_StorageBox_Balloon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_StorageBox_Balloon.EngramEntry_StorageBox_Balloon_C.ExecuteUbergraph_EngramEntry_StorageBox_Balloon");

	UEngramEntry_StorageBox_Balloon_C_ExecuteUbergraph_EngramEntry_StorageBox_Balloon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
