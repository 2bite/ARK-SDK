// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalInventoryBP_Bookshelf_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalInventoryBP_Bookshelf.PrimalInventoryBP_Bookshelf_C.ExecuteUbergraph_PrimalInventoryBP_Bookshelf
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalInventoryBP_Bookshelf_C::ExecuteUbergraph_PrimalInventoryBP_Bookshelf(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_Bookshelf.PrimalInventoryBP_Bookshelf_C.ExecuteUbergraph_PrimalInventoryBP_Bookshelf");

	UPrimalInventoryBP_Bookshelf_C_ExecuteUbergraph_PrimalInventoryBP_Bookshelf_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
