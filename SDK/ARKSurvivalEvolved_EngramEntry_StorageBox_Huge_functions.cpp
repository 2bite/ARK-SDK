// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_StorageBox_Huge_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_StorageBox_Huge.EngramEntry_StorageBox_Huge_C.ExecuteUbergraph_EngramEntry_StorageBox_Huge
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_StorageBox_Huge_C::ExecuteUbergraph_EngramEntry_StorageBox_Huge(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_StorageBox_Huge.EngramEntry_StorageBox_Huge_C.ExecuteUbergraph_EngramEntry_StorageBox_Huge");

	UEngramEntry_StorageBox_Huge_C_ExecuteUbergraph_EngramEntry_StorageBox_Huge_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
