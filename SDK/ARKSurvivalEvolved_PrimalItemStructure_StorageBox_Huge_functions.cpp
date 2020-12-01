// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_StorageBox_Huge_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_StorageBox_Huge.PrimalItemStructure_StorageBox_Huge_C.ExecuteUbergraph_PrimalItemStructure_StorageBox_Huge
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_StorageBox_Huge_C::ExecuteUbergraph_PrimalItemStructure_StorageBox_Huge(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_StorageBox_Huge.PrimalItemStructure_StorageBox_Huge_C.ExecuteUbergraph_PrimalItemStructure_StorageBox_Huge");

	UPrimalItemStructure_StorageBox_Huge_C_ExecuteUbergraph_PrimalItemStructure_StorageBox_Huge_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
