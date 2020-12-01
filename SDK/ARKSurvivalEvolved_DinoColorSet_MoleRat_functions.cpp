// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoColorSet_MoleRat_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoColorSet_MoleRat.DinoColorSet_MoleRat_C.ExecuteUbergraph_DinoColorSet_MoleRat
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoColorSet_MoleRat_C::ExecuteUbergraph_DinoColorSet_MoleRat(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoColorSet_MoleRat.DinoColorSet_MoleRat_C.ExecuteUbergraph_DinoColorSet_MoleRat");

	UDinoColorSet_MoleRat_C_ExecuteUbergraph_DinoColorSet_MoleRat_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
