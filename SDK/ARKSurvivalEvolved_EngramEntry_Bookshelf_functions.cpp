// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_Bookshelf_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_Bookshelf.EngramEntry_Bookshelf_C.ExecuteUbergraph_EngramEntry_Bookshelf
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_Bookshelf_C::ExecuteUbergraph_EngramEntry_Bookshelf(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_Bookshelf.EngramEntry_Bookshelf_C.ExecuteUbergraph_EngramEntry_Bookshelf");

	UEngramEntry_Bookshelf_C_ExecuteUbergraph_EngramEntry_Bookshelf_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
