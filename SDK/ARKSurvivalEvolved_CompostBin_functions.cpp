// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_CompostBin_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CompostBin.CompostBin_C.UserConstructionScript
// ()

void ACompostBin_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function CompostBin.CompostBin_C.UserConstructionScript");

	ACompostBin_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CompostBin.CompostBin_C.ExecuteUbergraph_CompostBin
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ACompostBin_C::ExecuteUbergraph_CompostBin(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CompostBin.CompostBin_C.ExecuteUbergraph_CompostBin");

	ACompostBin_C_ExecuteUbergraph_CompostBin_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
