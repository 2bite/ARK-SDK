// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Bookshelf_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Bookshelf.Bookshelf_C.UserConstructionScript
// ()

void ABookshelf_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bookshelf.Bookshelf_C.UserConstructionScript");

	ABookshelf_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bookshelf.Bookshelf_C.ExecuteUbergraph_Bookshelf
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABookshelf_C::ExecuteUbergraph_Bookshelf(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bookshelf.Bookshelf_C.ExecuteUbergraph_Bookshelf");

	ABookshelf_C_ExecuteUbergraph_Bookshelf_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
