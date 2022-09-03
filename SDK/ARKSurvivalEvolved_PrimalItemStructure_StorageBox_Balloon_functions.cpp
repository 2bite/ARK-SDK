// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_StorageBox_Balloon_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_StorageBox_Balloon.PrimalItemStructure_StorageBox_Balloon_C.ExecuteUbergraph_PrimalItemStructure_StorageBox_Balloon
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_StorageBox_Balloon_C::ExecuteUbergraph_PrimalItemStructure_StorageBox_Balloon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_StorageBox_Balloon.PrimalItemStructure_StorageBox_Balloon_C.ExecuteUbergraph_PrimalItemStructure_StorageBox_Balloon");

	UPrimalItemStructure_StorageBox_Balloon_C_ExecuteUbergraph_PrimalItemStructure_StorageBox_Balloon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
