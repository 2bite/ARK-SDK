// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_MoleRat_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_MoleRat.DinoEntry_MoleRat_C.ExecuteUbergraph_DinoEntry_MoleRat
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_MoleRat_C::ExecuteUbergraph_DinoEntry_MoleRat(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_MoleRat.DinoEntry_MoleRat_C.ExecuteUbergraph_DinoEntry_MoleRat");

	UDinoEntry_MoleRat_C_ExecuteUbergraph_DinoEntry_MoleRat_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
