// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_Bookshelf_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_Bookshelf.PrimalItemStructure_Bookshelf_C.ExecuteUbergraph_PrimalItemStructure_Bookshelf
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_Bookshelf_C::ExecuteUbergraph_PrimalItemStructure_Bookshelf(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_Bookshelf.PrimalItemStructure_Bookshelf_C.ExecuteUbergraph_PrimalItemStructure_Bookshelf");

	UPrimalItemStructure_Bookshelf_C_ExecuteUbergraph_PrimalItemStructure_Bookshelf_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
