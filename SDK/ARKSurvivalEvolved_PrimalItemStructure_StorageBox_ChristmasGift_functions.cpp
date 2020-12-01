// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_StorageBox_ChristmasGift_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_StorageBox_ChristmasGift.PrimalItemStructure_StorageBox_ChristmasGift_C.ExecuteUbergraph_PrimalItemStructure_StorageBox_ChristmasGift
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_StorageBox_ChristmasGift_C::ExecuteUbergraph_PrimalItemStructure_StorageBox_ChristmasGift(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_StorageBox_ChristmasGift.PrimalItemStructure_StorageBox_ChristmasGift_C.ExecuteUbergraph_PrimalItemStructure_StorageBox_ChristmasGift");

	UPrimalItemStructure_StorageBox_ChristmasGift_C_ExecuteUbergraph_PrimalItemStructure_StorageBox_ChristmasGift_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
