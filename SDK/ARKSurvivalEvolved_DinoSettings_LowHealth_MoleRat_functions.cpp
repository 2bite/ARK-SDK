// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSettings_LowHealth_MoleRat_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoSettings_LowHealth_MoleRat.DinoSettings_LowHealth_MoleRat_C.ExecuteUbergraph_DinoSettings_LowHealth_MoleRat
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoSettings_LowHealth_MoleRat_C::ExecuteUbergraph_DinoSettings_LowHealth_MoleRat(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoSettings_LowHealth_MoleRat.DinoSettings_LowHealth_MoleRat_C.ExecuteUbergraph_DinoSettings_LowHealth_MoleRat");

	UDinoSettings_LowHealth_MoleRat_C_ExecuteUbergraph_DinoSettings_LowHealth_MoleRat_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
