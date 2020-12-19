// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PreservingBin_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PreservingBin.PreservingBin_C.UserConstructionScript
// ()

void APreservingBin_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PreservingBin.PreservingBin_C.UserConstructionScript");

	APreservingBin_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PreservingBin.PreservingBin_C.ExecuteUbergraph_PreservingBin
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void APreservingBin_C::ExecuteUbergraph_PreservingBin(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PreservingBin.PreservingBin_C.ExecuteUbergraph_PreservingBin");

	APreservingBin_C_ExecuteUbergraph_PreservingBin_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
